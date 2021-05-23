/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NEFilterVerdict : NSObject

{
    _Bool _shouldReport;
    _Bool _needRules;
    _Bool _drop;
    _Bool _remediate;
    _Bool _urlAppendString;
    _Bool _pause;
    NSString *_remediationURLMapKey;
    NSString *_remediationButtonTextMapKey;
    NSString *_urlAppendStringMapKey;
}

@property _Bool needRules;
@property _Bool drop;
@property _Bool remediate;
@property _Bool urlAppendString;
@property _Bool pause;
@property (retain) NSString *remediationURLMapKey;
@property (retain) NSString *remediationButtonTextMapKey;
@property (retain) NSString *urlAppendStringMapKey;
@property _Bool shouldReport;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDrop:(_Bool)arg1 remediate:(_Bool)arg2;
- (id)initWithPause:(_Bool)arg1;

@end
