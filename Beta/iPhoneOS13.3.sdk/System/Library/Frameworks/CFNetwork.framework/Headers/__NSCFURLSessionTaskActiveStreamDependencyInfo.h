/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSMutableDictionary, NSNumber;

@interface __NSCFURLSessionTaskActiveStreamDependencyInfo : NSObject

{
    NSNumber *_streamID;
    NSMutableDictionary *_mainDocumentTaskURLs;
    NSMutableDictionary *_mainDocumentTaskMimeTypes;
}

@property (retain, nonatomic) NSNumber *_streamID;
@property (retain, nonatomic) NSMutableDictionary *_mainDocumentTaskURLs;
@property (retain, nonatomic) NSMutableDictionary *_mainDocumentTaskMimeTypes;

- (id)init;
- (void)dealloc;
- (_Bool)isEmpty;
- (id)initWithStreamID:(id)arg1 requestURLString:(id)arg2 dependencyInfo:(id)arg3;
- (void)addNewStreamID:(id)arg1 requestURLString:(id)arg2;
- (int)parentStreamIDForURLString:(id)arg1;
- (int)parentStreamIDForMimeType:(id)arg1;
- (void)removeStreamWithStreamID:(id)arg1 requestURLString:(id)arg2;

@end
