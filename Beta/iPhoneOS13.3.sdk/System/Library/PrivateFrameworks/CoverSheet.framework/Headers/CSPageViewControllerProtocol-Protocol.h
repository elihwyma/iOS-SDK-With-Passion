/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/Swift-Protocol.h>

@class CSLayoutStrategy, NSString;

@protocol CSCoverSheetViewControllerProtocol;

@protocol CSPageViewControllerProtocol <Swift>

@property (weak, nonatomic) id <CSCoverSheetViewControllerProtocol> coverSheetViewController;
@property (nonatomic, getter=isTransitioning) _Bool transitioning;
@property (nonatomic, readonly) _Bool authenticated;
@property (retain, nonatomic) CSLayoutStrategy *layoutStrategy;
@property (copy, nonatomic, readonly) NSString *pageRole;

+ (unsigned short)requiredCapabilities;
+ (unsigned short)isAvailableForConfiguration;

@end
