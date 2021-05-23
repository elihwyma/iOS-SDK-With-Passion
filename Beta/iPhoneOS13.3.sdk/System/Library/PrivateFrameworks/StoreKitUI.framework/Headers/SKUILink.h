/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString, NSURL, SKUICountdown, SKUIItem;

@interface SKUILink : NSObject

{
    SKUICountdown *_countdown;
    SKUIItem *_item;
    NSNumber *_itemIdentifier;
    NSString *_target;
    NSString *_title;
    NSURL *_url;
}

@property (nonatomic, readonly, getter=isActionable) _Bool actionable;
@property (nonatomic, readonly) SKUIItem *item;
@property (nonatomic, readonly) NSNumber *itemIdentifier;
@property (nonatomic, readonly) NSDictionary *linkDictionary;
@property (nonatomic, readonly) NSString *targetString;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithURL:(id)arg1;
- (id)valueForMetricsField:(id)arg1;
- (void)_setItem:(id)arg1;
- (id)initWithComponentContext:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2 targetString:(id)arg3;
- (id)initWithLinkDictionary:(id)arg1;

@end
