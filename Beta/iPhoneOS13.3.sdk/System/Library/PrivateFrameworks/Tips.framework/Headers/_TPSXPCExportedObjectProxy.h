/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@interface _TPSXPCExportedObjectProxy : NSObject

{
    id _weakExportedObject;
    Class _weakExportedObjectClass;
}

@property (weak, nonatomic) id weakExportedObject;
@property (retain, nonatomic) Class weakExportedObjectClass;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end
