/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString;

@interface CNHandle : NSObject

{
    NSString *_stringValue;
    unsigned long long _type;
    NSString *_customIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *stringValue;
@property (copy, nonatomic, readonly) NSString *customIdentifier;
@property (nonatomic, readonly) unsigned long long type;

+ (id)tuHandleForHandle:(id)arg1;
+ (unsigned long long)handleTypeForPropertyKey:(id)arg1;
+ (id)inPersonHandleForHandle:(id)arg1;
+ (id)keyTypeMapping;
+ (long long)tuHandleTypeFromType:(unsigned long long)arg1;
+ (id)tuHandleTypeMap;
+ (long long)inPersonHandleTypeForType:(unsigned long long)arg1;
+ (id)inPersonHandleTypeMap;
+ (long long)geminiHandleTypeForType:(unsigned long long)arg1;
+ (id)geminiHandleTypeMap;
+ (id)geminiHandleForHandle:(id)arg1;

- (id)initWithStringValue:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithStringValue:(id)arg1 customIdentifier:(id)arg2 type:(unsigned long long)arg3;

@end
