/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSEnumerator, NSString;

__attribute__((visibility("hidden")))
@interface SDPParser : NSObject

{
    NSArray *_lines;
    NSEnumerator *_lineEnumerator;
    NSDictionary *_fieldNameMap;
    NSString *_fieldName;
    NSString *_fieldValue;
    unsigned char _fieldType;
    _Bool _parsingDone;
}

@property (nonatomic, readonly) NSString *fieldName;
@property (nonatomic, readonly) NSString *fieldValue;
@property (nonatomic, readonly) unsigned char fieldType;
@property (nonatomic, readonly) _Bool parsingDone;

- (void)dealloc;
- (id)initWithString:(id)arg1;
- (_Bool)nextLine;
- (_Bool)parseMediaLineHeader:(id)arg1 mediaType:(int *)arg2 supportedPayloads:(id)arg3 rtpPort:(int *)arg4;
- (int)stringToMediaType:(id)arg1;

@end
