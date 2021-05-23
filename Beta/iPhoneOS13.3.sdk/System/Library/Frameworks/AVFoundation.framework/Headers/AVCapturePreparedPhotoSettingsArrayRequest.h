/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVCapturePreparedPhotoSettingsArrayRequest : NSObject

{
    unsigned long long _requestID;
    NSArray *_photoSettingsArray;
    CDUnknownBlockType _completionHandler;
    _Bool _completed;
}

@property (readonly) unsigned long long requestID;
@property (readonly) NSArray *photoSettingsArray;
@property (readonly) CDUnknownBlockType completionHandler;
@property (nonatomic, getter=isCompleted) _Bool completed;

+ (id)preparedPhotoSettingsArrayRequestWithArray:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (id)_initWithArray:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setRequestID:(unsigned long long)arg1;

@end
