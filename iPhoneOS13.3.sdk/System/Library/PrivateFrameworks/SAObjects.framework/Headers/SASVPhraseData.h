//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray;

@interface SASVPhraseData : AceObject <SAAceSerializable>
{
}

+ (id)phraseDataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)phraseData;
@property(copy, nonatomic) NSArray *interpretationDataList;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

