/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@interface NPKLibrary : NSObject

{
    _Bool _needsRelevancyInformation;
}

@property (nonatomic) _Bool needsRelevancyInformation;

+ (id)sharedInstance;

- (void)addPassData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
