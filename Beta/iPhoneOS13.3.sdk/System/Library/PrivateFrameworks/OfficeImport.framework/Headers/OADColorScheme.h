/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OADColorScheme : NSObject <Swift>

{
    NSString *mName;
    NSMutableDictionary *mColors;
}

@property (copy, nonatomic) NSString *name;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (id)colorForIndex:(int)arg1;
- (void)addColor:(id)arg1 index:(int)arg2;
- (unsigned long long)colorCount;
- (void)validateColorScheme;
- (void)setColor:(id)arg1 index:(int)arg2;

@end
