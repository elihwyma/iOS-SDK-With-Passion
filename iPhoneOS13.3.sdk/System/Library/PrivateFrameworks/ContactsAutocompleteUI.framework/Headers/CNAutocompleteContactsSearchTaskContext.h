//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol CNAutocompleteSearchConsumer;

@interface CNAutocompleteContactsSearchTaskContext : NSObject
{
    id <CNAutocompleteSearchConsumer> _consumer;
    NSString *_text;
    NSMutableSet *_operations;
    NSMutableSet *_searchQueries;
}

+ (id)contextWithConsumer:(id)arg1 text:(id)arg2 operations:(id)arg3 searchQueries:(id)arg4;
@property(readonly, nonatomic) NSMutableSet *searchQueries; // @synthesize searchQueries=_searchQueries;
@property(readonly, nonatomic) NSMutableSet *operations; // @synthesize operations=_operations;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) id <CNAutocompleteSearchConsumer> consumer; // @synthesize consumer=_consumer;
// - (void).cxx_destruct;
- (BOOL)consumerRespondsToCallbacks;
- (BOOL)done;

@end

