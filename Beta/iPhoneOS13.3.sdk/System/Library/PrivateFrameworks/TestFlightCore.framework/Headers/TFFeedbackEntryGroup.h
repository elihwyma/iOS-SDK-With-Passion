/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, TFFeedbackEntry;

__attribute__((visibility("hidden")))
@interface TFFeedbackEntryGroup : NSObject

{
    _Bool _toggleable;
    NSString *_identifier;
    NSString *_title;
    NSArray *_entries;
    NSString *_headerText;
    NSDictionary *_headerTextLinkMap;
    NSString *_footerText;
    NSDictionary *_footerTextLinkMap;
    unsigned long long _election;
    TFFeedbackEntry *_groupToggleEntry;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSArray *entries;
@property (copy, nonatomic, readonly) NSString *headerText;
@property (copy, nonatomic, readonly) NSDictionary *headerTextLinkMap;
@property (copy, nonatomic, readonly) NSString *footerText;
@property (copy, nonatomic, readonly) NSDictionary *footerTextLinkMap;
@property (nonatomic, readonly) unsigned long long election;
@property (nonatomic, readonly, getter=isToggleable) _Bool toggleable;
@property (nonatomic, readonly) TFFeedbackEntry *groupToggleEntry;

- (id)initWithIdentifier:(id)arg1 entries:(id)arg2 title:(id)arg3 election:(unsigned long long)arg4 headerText:(id)arg5 headerTextLinkMap:(id)arg6 footerText:(id)arg7 footerTextLinkMap:(id)arg8;
- (unsigned long long)numberOfVisibleItemsForIncludeState:(_Bool)arg1;
- (id)visibleEntryForIndex:(unsigned long long)arg1;

@end
