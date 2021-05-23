/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDFill : NSObject <Swift>

{
    EDResources *mResources;
}

+ (id)fillWithResources:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (id)initWithResources:(id)arg1;

@end
