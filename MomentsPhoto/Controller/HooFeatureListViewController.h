//
//  HooFeatureViewController.h
//  MomentsPhoto
//
//  Created by HooJackie on 14/7/24.
//  Copyright (c) 2014年 jackie. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RESideMenu.h"
#import "PXAPIHelper.h"
@class HooFeatureListViewController;


@protocol HooFeatureListViewControllerDelegate <NSObject>
@required
- (void)featureListViewController:(HooFeatureListViewController *)featureListViewController didSelectedfeature:(NSInteger)featureIndex featureName:(NSString *)featureName;
@end

@interface HooFeatureListViewController : UIViewController<UITableViewDataSource, UITableViewDelegate, RESideMenuDelegate>

@property (nonatomic,weak) id<HooFeatureListViewControllerDelegate> delegate;

@end
