/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TSKAggregateSearchTargetProvider : NSObject

{
    NSArray *_searchTargetProviders;
}

@property (retain, nonatomic) NSArray *searchTargetProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)arg1;
- (void)withRootSearchTargetAtIndex:(unsigned long long)arg1 executeBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)nextRootSearchTargetIndexFromIndex:(unsigned long long)arg1 forString:(id)arg2 options:(unsigned long long)arg3 inDirection:(unsigned long long)arg4;
- (unsigned long long)p_firstTargetIndexForProvider:(id)arg1;
- (void)p_enumerateTargetProvidersFromTargetIndex:(unsigned long long)arg1 direction:(unsigned long long)arg2 action:(CDUnknownBlockType)arg3;
- (id)initWithSearchTargetProviders:(id)arg1;

@end
