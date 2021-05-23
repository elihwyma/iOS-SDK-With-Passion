/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSDateFormatter.h>

@interface NSDateFormatter (FCAdditions)

+ (id)dateFormatterWithFormat:(id)arg1 forReuse:(_Bool)arg2;
+ (id)dateFormatterWithFormat:(id)arg1 localeIdentifier:(id)arg2 forReuse:(_Bool)arg3;
+ (id)dateFormatterWithFormat:(id)arg1 localeIdentifier:(id)arg2 timezone:(id)arg3 forReuse:(_Bool)arg4;
+ (id)dateFormatterWithFormat:(id)arg1 timezone:(id)arg2 forReuse:(_Bool)arg3;

- (id)initWithFormat:(id)arg1 localeIdentifier:(id)arg2;

@end
