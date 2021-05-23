/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface EFSQLPropertyMapper : NSObject

{
    NSMutableDictionary *_lookupValues;
}

@property (retain, nonatomic) NSMutableDictionary *lookupValues;

+ (id)emptyPropertyMapper;

- (id)init;
- (id)merge:(id)arg1;
- (id)columnNameForLookupKey:(id)arg1 value:(id)arg2;
- (void)registerColumnName:(id)arg1 table:(id)arg2 lookupKeys:(id)arg3 forClass:(Class)arg4 property:(SEL)arg5;
- (id)qualifiedColumnExpressionForClass:(Class)arg1 property:(SEL)arg2 availableTables:(id)arg3;
- (_Bool)hasLookupKey:(id)arg1 class:(Class)arg2 property:(SEL)arg3;
- (id)valueForLookupKey:(id)arg1 class:(Class)arg2 property:(SEL)arg3;
- (id)_findAllProtocolsOfClass:(Class)arg1 withProperty:(SEL)arg2;
- (void)registerColumn:(id)arg1 forProtocol:(id)arg2 property:(SEL)arg3 lookupKeys:(id)arg4;
- (id)valueForLookupKey:(id)arg1 protocol:(id)arg2 property:(SEL)arg3;
- (void)registerColumnName:(id)arg1 table:(id)arg2 lookupKeys:(id)arg3;
- (id)_qualifiedColumnExpressionForColumn:(id)arg1 availableTables:(id)arg2;
- (void)registerColumn:(id)arg1 forClass:(Class)arg2 property:(SEL)arg3 lookupKeys:(id)arg4;
- (id)columnForClass:(Class)arg1 property:(SEL)arg2;
- (id)columnForProtocol:(id)arg1 property:(SEL)arg2;
- (id)columnForLookupKey:(id)arg1 value:(id)arg2;
- (id)columnNameForClass:(Class)arg1 property:(SEL)arg2;
- (id)columnNameForProtocol:(id)arg1 property:(SEL)arg2;
- (id)qualifiedColumnExpressionForLookupKey:(id)arg1 value:(id)arg2 availableTables:(id)arg3;

@end
