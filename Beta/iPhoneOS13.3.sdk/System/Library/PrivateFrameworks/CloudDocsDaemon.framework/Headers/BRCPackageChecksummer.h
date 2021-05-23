/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCChecksummingOutputStream, NSData;

@interface BRCPackageChecksummer : NSObject

{
    BRCChecksummingOutputStream *_stream;
}

@property (nonatomic, readonly) NSData *signature;

- (id)init;
- (void)done;
- (_Bool)addItem:(id)arg1 error:(id *)arg2;

@end
