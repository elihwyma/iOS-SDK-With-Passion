/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface VMUScanOverlay : NSObject

{
    NSMutableArray *_rules;
}

@property (nonatomic, readonly) NSArray *refinementRules;

+ (id)defaultOverlayWithScanner:(id)arg1;
+ (id)defaultOverlay;

- (id)initWithScanner:(id)arg1;
- (void)addMetadataRefinementRule:(CDUnknownBlockType)arg1;

@end
