//
//  BroShoutsVC.h
//  BroShout
//
//  Created by Steffen Rudkjøbing on 03/01/15.
//  Copyright (c) 2015 Steffen Harbom Rudkjøbing. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ShoutRequestCell.h"
#import "ShoutDeclinedCell.h"
#import <iAd/iAd.h>

@interface ShoutsVC : UIViewController <UITableViewDataSource, UITableViewDelegate, ShoutRequestCellDelegate, ADBannerViewDelegate, ShoutDeclinedCellDelegate>

@end
