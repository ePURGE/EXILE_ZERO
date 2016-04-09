/**
 * ExileClient_gui_postProcessing_reset
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
ExileClientPostProcessingColorCorrections ppEffectAdjust [1, 1.1, -0.05, [0.4, 0.2, 0.3, -0.1], [0.79, 0.72, 0.62, 1], [0.5,0.5,0.5,0], [0,0,0,0,0,0,4]];
ExileClientPostProcessingColorCorrections ppEffectCommit 0;
ExileClientPostProcessingBackgroundBlur ppEffectEnable false;
ExileClientPostProcessingBackgroundBlur ppEffectAdjust [0];
ExileClientPostProcessingBackgroundBlur ppEffectCommit 0;
ExileClientPostProcessingDelirium ppEffectAdjust [2, 0.1, 0.1, 0.2, 0.2, 2, 2, 0.01, 0.01, 0.01, 0.01, 0.01, 0.1, 2, 2];
ExileClientPostProcessingDelirium ppEffectCommit 0;
ExileClientPostProcessingDelirium ppEffectEnable false;
/*edit*/
ExileClientPostProcessingBackgroundBlur_Wound ppEffectEnable false;
ExileClientPostProcessingBackgroundBlur_Wound ppEffectAdjust [0];
ExileClientPostProcessingBackgroundBlur_Wound ppEffectCommit 0;
ExileClientPostProcessingBackgroundBlur_Wound ppEffectEnable true;
ExileClientPostProcessingBackgroundBlur_Wound ppEffectAdjust [0];
ExileClientPostProcessingBackgroundBlur_Wound ppEffectCommit 0;
/*edit*/
true