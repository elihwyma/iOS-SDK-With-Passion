/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol HFStringGenerator;

@interface HFSimpleFormattedValue : NSObject

{
    id <HFStringGenerator> _currentFormattedValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) id <HFStringGenerator> currentFormattedValue;

- (id)observeFormattedValueChangesWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithFormattedValue:(id)arg1;

@end
