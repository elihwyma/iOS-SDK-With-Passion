/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SCKRecordFieldSchema : NSObject

{
    _Bool _encrypted;
    _Bool _required;
    NSString *_name;
    Class _valueClass;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) Class valueClass;
@property (nonatomic, getter=isRequired) _Bool required;
@property (nonatomic, readonly, getter=isEncrypted) _Bool encrypted;

- (id)initWithName:(id)arg1 valueClass:(Class)arg2 required:(_Bool)arg3 encrypted:(_Bool)arg4;
- (_Bool)isValidRecord:(id)arg1;

@end
