/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CNSyncImageResult : NSObject

{
    unsigned long long _type;
    NSData *_imageData;
    NSData *_imageHash;
    struct CGRect _cropRect;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) struct CGRect cropRect;
@property (nonatomic, readonly) NSData *imageHash;

- (id)initWithType:(unsigned long long)arg1 imageData:(id)arg2 cropRect:(struct CGRect)arg3 imageHash:(id)arg4;

@end
