/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSURL.h>

@interface PLURL : NSURL

{
    _Atomic unsigned short _ssbCounter;
}

- (void)dealloc;
- (_Bool)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;
- (id)replacementObjectForCoder:(id)arg1;

@end
