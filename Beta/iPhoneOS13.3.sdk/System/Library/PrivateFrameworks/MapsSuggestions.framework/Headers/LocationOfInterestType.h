/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface LocationOfInterestType : NSObject

{
    NSString *_customLabel;
    long long _labelType;
}

@property (copy, nonatomic) NSString *customLabel;
@property (nonatomic, readonly) long long labelType;
@property (nonatomic, readonly) NSString *label;

- (id)debugDescription;
- (id)initWithContactAddressType:(int)arg1 customLabel:(id)arg2;
- (id)initWithLabelType:(long long)arg1;
- (id)initWithLabelType:(long long)arg1 customLabel:(id)arg2;

@end
