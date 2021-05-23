/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSMutableData;

@protocol MSVMessageParserDelegate;

@interface MSVMessageParser : NSObject

{
    id <MSVMessageParserDelegate> _delegate;
    NSMutableData *_unhandledPartialObjectData;
    long long _unhandledObjectDataExpectedLength;
    NSMutableData *_unhandledPartialData;
}

@property (retain, nonatomic) NSMutableData *unhandledPartialObjectData;
@property (nonatomic) long long unhandledObjectDataExpectedLength;
@property (retain, nonatomic) NSMutableData *unhandledPartialData;
@property (weak, nonatomic) id <MSVMessageParserDelegate> delegate;

+ (id)createHeader:(unsigned long long)arg1;

- (void)_notifyDelegate:(id)arg1;
- (void)processData:(id)arg1;

@end
