/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUINamedLookup.h>

@class NSData, NSString;

@interface CUINamedData : CUINamedLookup

@property (copy, nonatomic, readonly) NSString *utiType;
@property (copy, nonatomic, readonly) NSData *data;

- (id)description;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;
- (id)_renditionName;

@end
