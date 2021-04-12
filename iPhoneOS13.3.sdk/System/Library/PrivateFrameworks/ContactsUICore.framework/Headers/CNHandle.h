//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNHandle-Protocol.h>

@class NSString;

@interface CNHandle : NSObject <CNHandle>
{
    NSString *_stringValue;
    NSUInteger _type;
    NSString *_customIdentifier;
}

+ (id)keyTypeMapping;
+ (NSUInteger)handleTypeForPropertyKey:(id)arg1;
+ (id)tuHandleTypeMap;
+ (long long)tuHandleTypeFromType:(NSUInteger)arg1;
+ (id)tuHandleForHandle:(id)arg1;
+ (id)inPersonHandleTypeMap;
+ (long long)inPersonHandleTypeForType:(NSUInteger)arg1;
+ (id)inPersonHandleForHandle:(id)arg1;
+ (id)geminiHandleTypeMap;
+ (long long)geminiHandleTypeForType:(NSUInteger)arg1;
+ (id)geminiHandleForHandle:(id)arg1;
@property(readonly, copy, nonatomic) NSString *customIdentifier; // @synthesize customIdentifier=_customIdentifier;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
// - (void).cxx_destruct;
- (id)initWithStringValue:(id)arg1 type:(NSUInteger)arg2;
- (id)initWithStringValue:(id)arg1 customIdentifier:(id)arg2 type:(NSUInteger)arg3;

@end

