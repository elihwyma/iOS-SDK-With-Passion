/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SFSiriWordTimingInfo : NSObject

{
    NSString *_localizedText;
    double _timeOffset;
    NSString *_wordID;
    struct _NSRange _textRange;
}

@property (copy, nonatomic) NSString *localizedText;
@property (nonatomic) double timeOffset;
@property (nonatomic) struct _NSRange textRange;
@property (copy, nonatomic) NSString *wordID;

+ (id)serializableArrayWithTimingInfoArray:(id)arg1;
+ (id)timingInfoArrayWithSerializableArray:(id)arg1;

- (id)dictionary;
- (id)initWithDictionary:(id)arg1;

@end
