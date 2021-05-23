/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <SIMToolkitUI/STKTextSessionData.h>

@class NSArray, NSString;

@interface STKListItemsSessionData : STKTextSessionData

{
    NSArray *_listItems;
}

@property (nonatomic, readonly) NSArray *listItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1 listItems:(id)arg2;

@end
