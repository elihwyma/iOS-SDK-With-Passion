/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface STKListItem : NSObject

{
    NSString *_text;
    _Bool _selected;
}

@property (copy, nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) _Bool isSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1 selected:(_Bool)arg2;

@end
