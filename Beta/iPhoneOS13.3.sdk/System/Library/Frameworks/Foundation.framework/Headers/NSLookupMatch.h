/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString, NSTextCheckingResult;

@interface NSLookupMatch : NSObject

{
    unsigned long long _matchType;
    struct _NSRange _range;
    double _score;
    NSTextCheckingResult *_dataDetectorResult;
    NSString *_languageIdentifier;
}

@property (retain) NSTextCheckingResult *dataDetectorResult;
@property (retain) NSString *languageIdentifier;
@property (readonly) unsigned long long matchType;
@property (readonly) struct _NSRange range;
@property (readonly) double score;

+ (id)matchesInString:(id)arg1 types:(unsigned long long)arg2 range:(struct _NSRange)arg3;

- (void)dealloc;
- (id)description;
- (id)initWithType:(unsigned long long)arg1 range:(struct _NSRange)arg2 score:(double)arg3;

@end
