/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface LPFetcher : NSObject

{
    unsigned int _loggingID;
    id _userData;
}

@property (nonatomic, readonly) unsigned int _loggingID;
@property (retain, nonatomic) id userData;

- (id)init;
- (void)cancel;
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
