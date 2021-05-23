/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@protocol PPConnectionsLocationSourceDelegate;

@interface PPConnectionsSource : NSObject

{
    id <PPConnectionsLocationSourceDelegate> _delegate;
}

@property (weak, nonatomic) id <PPConnectionsLocationSourceDelegate> delegate;

+ (id)sharedInstance;
+ (id)identifier;

@end
