/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class MPMediaPropertyPredicate, NSString;

@interface SUScriptMediaPropertyPredicate : SUScriptObject

{
    NSString *_comparisonType;
    NSString *_property;
    id _value;
}

@property (nonatomic, readonly) MPMediaPropertyPredicate *nativePredicate;
@property (readonly) NSString *comparisonType;
@property (readonly) NSString *property;
@property (readonly) id value;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3;
- (id)_playlistAttributesForScriptArray:(id)arg1;

@end
