/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@interface TSWPTextStatistics : NSObject <Swift>

{
    unsigned long long _wordCount;
    unsigned long long _charactersNoWhiteSpace;
    unsigned long long _paragraphCount;
    _Bool _isAccurate;
}

@property (nonatomic) unsigned long long wordCount;
@property (nonatomic) unsigned long long charactersNoWhiteSpace;
@property (nonatomic) unsigned long long paragraphCount;
@property (nonatomic) _Bool isAccurate;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)resetStatistics;
- (void)setTextStatistics:(id)arg1;
- (void)addTextStatistics:(id)arg1;
- (void)removeTextStatistics:(id)arg1;

@end
