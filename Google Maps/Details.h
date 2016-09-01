//
//  Details.h
//  Google Maps
//
//  Created by xax on 8/29/16.
//  Copyright © 2016 xax. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Declarations.h"
#import "Parser.h"

@interface Details : UIViewController
@property (nonatomic,strong)    Declarations            *Declarations;
@property (nonatomic,strong)    Parser                  *Parser;
@property NSString *icono;

//Objects
@property (strong, nonatomic) IBOutlet UILabel *lblTemp;
@property (strong, nonatomic) IBOutlet UILabel *lblTempMax;
@property (strong, nonatomic) IBOutlet UILabel *lblTempMin;
@property (strong, nonatomic) IBOutlet UILabel *lblHumidity;
@property (strong, nonatomic) IBOutlet UILabel *lblPressure;
@property (strong, nonatomic) IBOutlet UIImageView *imgWeather;


//Actions
- (IBAction)btnGetDataPressed:(id)sender;

@end
