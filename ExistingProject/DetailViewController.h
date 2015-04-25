//
//  DetailViewController.h
//  ExistingProject
//
//  Created by libin on 15/4/25.
//  Copyright (c) 2015年 launch.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

