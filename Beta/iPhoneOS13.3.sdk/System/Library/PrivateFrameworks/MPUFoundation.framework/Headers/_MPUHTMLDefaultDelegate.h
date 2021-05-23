/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface _MPUHTMLDefaultDelegate : NSObject

{
    NSDictionary *_defaultAttributes;
}

@property (retain, nonatomic) NSDictionary *defaultAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)defaultAttributesForParser:(id)arg1;
- (id)parser:(id)arg1 prependStringForTagName:(id)arg2;
- (id)parser:(id)arg1 attributesForTagName:(id)arg2 tagAttributes:(id)arg3 currentState:(id)arg4;

@end
