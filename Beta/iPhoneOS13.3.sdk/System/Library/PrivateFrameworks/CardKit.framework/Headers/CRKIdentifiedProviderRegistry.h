/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableOrderedSet;

@interface CRKIdentifiedProviderRegistry : NSObject

{
    NSMutableOrderedSet *_identifiedProviders;
}

@property (nonatomic, readonly) NSArray *identifiedProviders;

+ (id)sharedInstance;

- (id)init;
- (void)registerIdentifiedProvider:(id)arg1;
- (void)unregisterIdentifiedProvider:(id)arg1;

@end
