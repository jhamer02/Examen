//
//  ViewController.h
//  Google Maps
//
//  Created by xax on 8/11/16.
//  Copyright © 2016 xax. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GoogleMaps/GoogleMaps.h>

extern long latitude;
extern long longitude;
@interface Start : UIViewController<CLLocationManagerDelegate,GMSMapViewDelegate>


@end

