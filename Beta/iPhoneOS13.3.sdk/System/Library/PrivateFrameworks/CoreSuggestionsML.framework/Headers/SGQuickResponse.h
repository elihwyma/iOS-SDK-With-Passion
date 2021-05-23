/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SGQuickResponse : NSObject

{
    _Bool _isCustomResponse;
    NSString *_text;
    NSString *_lang;
    unsigned long long _replyTextId;
    unsigned long long _styleGroupId;
    unsigned long long _semanticClassId;
    unsigned long long _modelId;
    unsigned long long _categoryId;
}

@property (copy, nonatomic, readonly) NSString *text;
@property (copy, nonatomic, readonly) NSString *lang;
@property (nonatomic, readonly) unsigned long long replyTextId;
@property (nonatomic, readonly) unsigned long long styleGroupId;
@property (nonatomic, readonly) unsigned long long semanticClassId;
@property (nonatomic, readonly) unsigned long long modelId;
@property (nonatomic, readonly) unsigned long long categoryId;
@property (nonatomic, readonly) _Bool isCustomResponse;

- (id)initWithText:(id)arg1 lang:(id)arg2 replyTextId:(unsigned long long)arg3 styleGroupId:(unsigned long long)arg4 semanticClassId:(unsigned long long)arg5 modelId:(unsigned long long)arg6 categoryId:(unsigned long long)arg7 isCustomResponse:(_Bool)arg8;

@end
