//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INCodableTimeIntervalAttributeMetadata.h>

@interface INCodableTimeIntervalAttributeMetadata (Workflow)
- (id)unitNamesWithMinimumUnit:(long long)arg1 maximumUnit:(long long)arg2;
- (id)unitNameForUnit:(long long)arg1;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (BOOL)wf_processParameterValue:(id)arg1 forParameter:(id)arg2 codableAttribute:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)wf_updateParameterDictionary:(id)arg1 forCodableAttribute:(id)arg2;
- (Class)wf_parameterClass;
- (Class)wf_objectClass;
@end

