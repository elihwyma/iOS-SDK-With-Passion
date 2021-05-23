/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class EDKeyedCollection, NSString;

__attribute__((visibility("hidden")))
@interface EDTableStyle : NSObject <Swift>

{
    NSString *mName;
    EDKeyedCollection *mTableStyleElements;
}

+ (id)tableStyle;

- (id)init;
- (id)description;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setName:(id)arg1;
- (id)tableStyleElements;

@end
