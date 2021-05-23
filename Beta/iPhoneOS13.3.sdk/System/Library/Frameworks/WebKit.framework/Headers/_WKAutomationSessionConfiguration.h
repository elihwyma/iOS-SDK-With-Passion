/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@interface _WKAutomationSessionConfiguration : NSObject

{
    _Bool _allowsInsecureMediaCapture;
    _Bool _suppressesICECandidateFiltering;
}

@property (nonatomic) _Bool allowsInsecureMediaCapture;
@property (nonatomic) _Bool suppressesICECandidateFiltering;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
