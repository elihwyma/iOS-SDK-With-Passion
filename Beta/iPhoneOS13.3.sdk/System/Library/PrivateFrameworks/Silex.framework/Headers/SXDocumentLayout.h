/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXDocumentLayout : NSObject

{
    long long _width;
    long long _margin;
    long long _gutter;
    unsigned long long _columns;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long width;
@property (nonatomic, readonly) long long margin;
@property (nonatomic, readonly) long long gutter;
@property (nonatomic, readonly) unsigned long long columns;

- (id)initWithWidth:(long long)arg1 margin:(long long)arg2 gutter:(long long)arg3 columns:(unsigned long long)arg4;

@end
