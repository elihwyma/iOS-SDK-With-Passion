/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactStore;

__attribute__((visibility("hidden")))
@interface CNSyncImageUtilities : NSObject

{
    CNContactStore *_contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;

+ (id)descriptorForRequiredKeys;
+ (id)os_log;
+ (id)syncImageResultForImageData:(id)arg1 cropRect:(struct CGRect)arg2 isPNG:(_Bool)arg3 maxSize:(long long)arg4;
+ (id)imageDataByRemovingOrientation:(id)arg1 isPNG:(_Bool)arg2;
+ (id)syncImageResultForJPEGCompressionWithImageData:(id)arg1 cropRect:(struct CGRect)arg2 maxSize:(long long)arg3;
+ (id)syncImageResultForScalingDownImageData:(id)arg1 cropRect:(struct CGRect)arg2 isPNG:(_Bool)arg3 maxSize:(long long)arg4;

- (id)initWithContactStore:(id)arg1;
- (id)syncImageResultForContact:(id)arg1 maxSize:(long long)arg2;
- (void)saveSyncImageResult:(id)arg1 toContact:(id)arg2;
- (id)generateSyncImageForImageData:(id)arg1 cropRect:(struct CGRect)arg2;
- (id)generateSyncImageForContact:(id)arg1;

@end
