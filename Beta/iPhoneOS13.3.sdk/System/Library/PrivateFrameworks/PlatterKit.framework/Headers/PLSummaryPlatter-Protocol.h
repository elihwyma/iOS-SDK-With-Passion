/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

#import <PlatterKit/Swift-Protocol.h>

@class NSString, UIImage, UIView;

@protocol PLSummaryPlatter <Swift>

@property (retain, nonatomic) NSString *primaryText;
@property (retain, nonatomic) NSString *primarySubtitleText;
@property (retain, nonatomic) NSString *secondaryText;
@property (retain, nonatomic) NSString *summaryText;
@property (retain, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) unsigned long long messageNumberOfLines;

@end
