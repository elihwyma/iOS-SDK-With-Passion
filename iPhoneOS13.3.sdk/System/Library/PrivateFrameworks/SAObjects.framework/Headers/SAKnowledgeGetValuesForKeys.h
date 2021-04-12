//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SAKnowledgeGetValuesForKeys : SABaseClientBoundCommand <SAAceSerializable>
{
}

+ (id)getValuesForKeysWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getValuesForKeys;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *storeType;
@property(copy, nonatomic) NSString *storeName;
@property(copy, nonatomic) NSArray *keys;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

