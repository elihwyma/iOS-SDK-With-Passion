/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface MBAggregateDictionary : NSObject

{
    NSMutableDictionary *_scalars;
}

@property (nonatomic, readonly) NSDictionary *scalars;

+ (void)addValue:(long long)arg1 forScalarKey:(id)arg2;
+ (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
+ (void)pushValue:(double)arg1 forDistributionKey:(id)arg2;
+ (void)incrementScalarKey:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)save;
- (void)_addScalarValue:(unsigned long long)arg1 forKey:(id)arg2;
- (void)addCountAndSizeOfFile:(id)arg1;
- (void)addFileSize:(unsigned long long)arg1 containerID:(id)arg2 aggregateDictionaryGroup:(id)arg3;

@end
