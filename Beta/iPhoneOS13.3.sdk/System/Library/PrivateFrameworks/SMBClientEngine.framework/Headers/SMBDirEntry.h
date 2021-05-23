/*
 Image: /System/Library/PrivateFrameworks/SMBClientEngine.framework/SMBClientEngine
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SMBDirEntry : NSObject

{
    unsigned int _ntstatus;
    NSString *_name;
    struct smbfattr _attributes;
}

@property unsigned int ntstatus;
@property (copy) NSString *name;
@property struct smbfattr attributes;

@end
