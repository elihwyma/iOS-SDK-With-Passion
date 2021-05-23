/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SUConcernItem : NSObject

{
    _Bool _default;
    NSString *_identifier;
    NSString *_title;
}

@property (nonatomic, getter=isDefaultConcern) _Bool defaultConcern;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;

- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end
