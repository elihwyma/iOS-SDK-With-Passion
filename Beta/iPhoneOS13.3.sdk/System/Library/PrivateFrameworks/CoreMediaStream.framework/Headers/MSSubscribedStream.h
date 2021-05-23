/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MSSubscribedStream : NSObject

{
    NSString *_streamID;
    NSString *_ctag;
}

@property (retain, nonatomic) NSString *streamID;
@property (retain, nonatomic) NSString *ctag;

+ (_Bool)supportsSecureCoding;
+ (id)subscribedStreamWithStreamID:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStreamID:(id)arg1;

@end
