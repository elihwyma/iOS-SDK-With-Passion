//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocomplete/CNAutocompleteRecentResult.h>

@interface CNAutocompleteInfrequentRecentResult : CNAutocompleteRecentResult
{
    NSUInteger _dateCount;
}

+ (NSUInteger)category;
+ (id)comparators;
+ (id)groupResultWithDisplayName:(id)arg1 dateCount:(NSUInteger)arg2 date:(id)arg3;
+ (id)contactResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 dateCount:(NSUInteger)arg4 date:(id)arg5;
@property NSUInteger dateCount; // @synthesize dateCount=_dateCount;

@end

