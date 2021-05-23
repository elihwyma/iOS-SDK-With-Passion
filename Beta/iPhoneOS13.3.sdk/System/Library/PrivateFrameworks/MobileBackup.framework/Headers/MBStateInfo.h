/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class NSDate, NSError, NSMutableArray;

@interface MBStateInfo : NSObject

{
    _Bool _isCloud;
    _Bool _isBackground;
    int _state;
    float _progress;
    unsigned long long _estimatedTimeRemaining;
    NSError *_error;
    NSMutableArray *_errors;
    NSDate *_date;
}

@property (nonatomic) int state;
@property (nonatomic) _Bool isBackground;
@property (nonatomic) _Bool isCloud;
@property (nonatomic) float progress;
@property (nonatomic) unsigned long long estimatedTimeRemaining;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableArray *errors;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithState:(int)arg1 progress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3 isCloud:(_Bool)arg4 isBackground:(_Bool)arg5 error:(id)arg6 errors:(id)arg7;
- (id)initWithState:(int)arg1 progress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3 error:(id)arg4 errors:(id)arg5;

@end
