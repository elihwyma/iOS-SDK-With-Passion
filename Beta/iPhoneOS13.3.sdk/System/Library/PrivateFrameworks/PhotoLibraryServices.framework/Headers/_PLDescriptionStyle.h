/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _PLDescriptionStyle : NSObject

{
    _Bool _prettyPrint;
    NSString *_initialFieldSeparator;
    NSString *_fieldSeparator;
    NSString *_nameValueSeparator;
    NSString *_suffix;
    long long _extraIndent;
}

@property (copy, readonly) NSString *initialFieldSeparator;
@property (copy, readonly) NSString *fieldSeparator;
@property (copy, readonly) NSString *nameValueSeparator;
@property (copy, readonly) NSString *suffix;
@property (readonly) long long extraIndent;
@property (readonly) _Bool prettyPrint;

+ (id)styleForEnum:(long long)arg1;

- (id)initWithIntialFieldSeparator:(id)arg1 fieldSeparator:(id)arg2 nameValueSeparator:(id)arg3 suffix:(id)arg4 extraIndent:(long long)arg5 prettyPrint:(_Bool)arg6;
- (id)descriptionForObject:(id)arg1 withIndent:(long long)arg2;

@end
