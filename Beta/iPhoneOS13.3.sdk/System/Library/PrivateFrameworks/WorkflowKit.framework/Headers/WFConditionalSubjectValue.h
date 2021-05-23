/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class WFContentCollection;

@interface WFConditionalSubjectValue : NSObject <Swift>

{
    _Bool _caseInsensitive;
    WFContentCollection *_content;
    long long _contentType;
    unsigned long long _comparableTimeUnits;
}

@property (nonatomic, readonly) WFContentCollection *content;
@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly, getter=isCaseInsensitive) _Bool caseInsensitive;
@property (nonatomic, readonly) unsigned long long comparableTimeUnits;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1 contentType:(long long)arg2 caseInsensitive:(_Bool)arg3 comparableTimeUnits:(unsigned long long)arg4;

@end
